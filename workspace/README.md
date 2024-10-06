docker run -it --name c_cpp_dev -v "$(pwd)":/workspace ubuntu:latest \
    bash -c "apt update && apt install -y clang make cmake build-essential libboost-all-dev libsdl2-dev gdb lldb gcc g++ && bash"
# Run C/C++ development

```bash
docker build -t c_cpp_dev .

docker run -it --name c_cpp_dev -v "$(pwd)":/workspace c_cpp_dev

# ou

docker-compose up --build -d && docker compose exec -ti c_cpp_dev bash
```