project(chatserver)

add_executable(chatserver a.c epoll-example.c )

install(TARGETS chatserver RUNTIME DESTINATION bin)
