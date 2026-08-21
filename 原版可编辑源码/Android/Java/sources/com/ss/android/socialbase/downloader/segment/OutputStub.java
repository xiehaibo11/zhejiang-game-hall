package com.ss.android.socialbase.downloader.segment;

import java.io.IOException;

class OutputStub implements IOutput {
    private final IOutput output;
    private final IOutput target;

    OutputStub(IOutput iOutput, IOutput iOutput2) {
        this.output = iOutput;
        this.target = iOutput2;
    }

    @Override
    public void write(Buffer buffer) throws IOException {
        buffer.output = this.target;
        this.output.write(buffer);
    }
}
