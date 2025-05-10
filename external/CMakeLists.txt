include(FetchContent)

Set(FETCHCONTENT_QUIET FALSE)

if (NOT TARGET nvtx)
    FetchContent_Declare(
      nvtx
      GIT_REPOSITORY  https://github.com/NVIDIA/NVTX
      GIT_TAG         6230bdf710bc94f44d433acceba735aaa9090ba5
      GIT_PROGRESS    TRUE
    )
    FetchContent_MakeAvailable(nvtx)

    set(nvtx3_dir ${nvtx_SOURCE_DIR} PARENT_SCOPE)
endif()
