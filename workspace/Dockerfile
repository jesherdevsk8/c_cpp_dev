FROM ubuntu:22.04

WORKDIR /workspace

RUN apt update && \
    apt install -y gcc g++ make cmake build-essential git curl vim && \
    apt clean && \
    rm -rf /var/lib/apt/lists/*

COPY .vimrc /root/.vimrc

CMD ["/bin/bash"]
