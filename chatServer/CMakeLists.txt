project(chatserver)

add_executable(chatserver epoll.cc   )

install(TARGETS chatserver RUNTIME DESTINATION bin)
