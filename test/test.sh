#!/bin/bash
./test &
sleep 5

echo 'dl test libtest.so
jmp test_func $test:test_func' | ./livepatch $(pidof test) ./test

sleep 5

kill -9 $(pidof test)

