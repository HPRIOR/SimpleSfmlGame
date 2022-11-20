cmake_minimum_required(VERSION 3.23)
project(SimpleSfmlGame)

set(CMAKE_CXX_STANDARD 11)

add_executable(SimpleSfmlGame main.cpp Vec2.cpp Vec2.h CCollision.cpp CCollision.h CScore.cpp CScore.h CTransform.cpp CTransform.h Entity.cpp Entity.h EntityManager.cpp EntityManager.h)
