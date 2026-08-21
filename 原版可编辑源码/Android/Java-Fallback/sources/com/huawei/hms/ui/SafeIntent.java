package com.huawei.hms.ui;

public class SafeIntent extends android.content.Intent {
    public SafeIntent(android.content.Intent r1) {
            r0 = this;
            if (r1 != 0) goto L7
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
        L7:
            r0.<init>(r1)
            return
    }

    @Override
    public java.lang.String getAction() {
            r1 = this;
            java.lang.String r0 = super.getAction()     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public boolean[] getBooleanArrayExtra(java.lang.String r1) {
            r0 = this;
            boolean[] r1 = super.getBooleanArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            boolean[] r1 = new boolean[r1]
            return r1
    }

    @Override
    public boolean getBooleanExtra(java.lang.String r1, boolean r2) {
            r0 = this;
            boolean r1 = super.getBooleanExtra(r1, r2)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    @Override
    public android.os.Bundle getBundleExtra(java.lang.String r1) {
            r0 = this;
            android.os.Bundle r1 = super.getBundleExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            return r1
    }

    @Override
    public byte[] getByteArrayExtra(java.lang.String r1) {
            r0 = this;
            byte[] r1 = super.getByteArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
    }

    @Override
    public byte getByteExtra(java.lang.String r1, byte r2) {
            r0 = this;
            byte r1 = super.getByteExtra(r1, r2)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    @Override
    public char[] getCharArrayExtra(java.lang.String r1) {
            r0 = this;
            char[] r1 = super.getCharArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            char[] r1 = new char[r1]
            return r1
    }

    @Override
    public char getCharExtra(java.lang.String r1, char r2) {
            r0 = this;
            char r1 = super.getCharExtra(r1, r2)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    @Override
    public java.lang.CharSequence[] getCharSequenceArrayExtra(java.lang.String r1) {
            r0 = this;
            java.lang.CharSequence[] r1 = super.getCharSequenceArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            java.lang.CharSequence[] r1 = new java.lang.CharSequence[r1]
            return r1
    }

    @Override
    public java.util.ArrayList<java.lang.CharSequence> getCharSequenceArrayListExtra(java.lang.String r1) {
            r0 = this;
            java.util.ArrayList r1 = super.getCharSequenceArrayListExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            return r1
    }

    @Override
    public java.lang.CharSequence getCharSequenceExtra(java.lang.String r1) {
            r0 = this;
            java.lang.CharSequence r1 = super.getCharSequenceExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            java.lang.String r1 = ""
            return r1
    }

    @Override
    public double[] getDoubleArrayExtra(java.lang.String r1) {
            r0 = this;
            double[] r1 = super.getDoubleArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            double[] r1 = new double[r1]
            return r1
    }

    @Override
    public double getDoubleExtra(java.lang.String r1, double r2) {
            r0 = this;
            double r1 = super.getDoubleExtra(r1, r2)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    @Override
    public android.os.Bundle getExtras() {
            r1 = this;
            android.os.Bundle r0 = super.getExtras()     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            return r0
    }

    @Override
    public float[] getFloatArrayExtra(java.lang.String r1) {
            r0 = this;
            float[] r1 = super.getFloatArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            float[] r1 = new float[r1]
            return r1
    }

    @Override
    public float getFloatExtra(java.lang.String r1, float r2) {
            r0 = this;
            float r1 = super.getFloatExtra(r1, r2)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    @Override
    public int[] getIntArrayExtra(java.lang.String r1) {
            r0 = this;
            int[] r1 = super.getIntArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            int[] r1 = new int[r1]
            return r1
    }

    @Override
    public int getIntExtra(java.lang.String r1, int r2) {
            r0 = this;
            int r1 = super.getIntExtra(r1, r2)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    @Override
    public java.util.ArrayList<java.lang.Integer> getIntegerArrayListExtra(java.lang.String r1) {
            r0 = this;
            java.util.ArrayList r1 = super.getIntegerArrayListExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            return r1
    }

    @Override
    public long[] getLongArrayExtra(java.lang.String r1) {
            r0 = this;
            long[] r1 = super.getLongArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            long[] r1 = new long[r1]
            return r1
    }

    @Override
    public long getLongExtra(java.lang.String r1, long r2) {
            r0 = this;
            long r1 = super.getLongExtra(r1, r2)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    @Override
    public android.os.Parcelable[] getParcelableArrayExtra(java.lang.String r1) {
            r0 = this;
            android.os.Parcelable[] r1 = super.getParcelableArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            android.os.Parcelable[] r1 = new android.os.Parcelable[r1]
            return r1
    }

    @Override
    public <T extends android.os.Parcelable> java.util.ArrayList<T> getParcelableArrayListExtra(java.lang.String r1) {
            r0 = this;
            java.util.ArrayList r1 = super.getParcelableArrayListExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            return r1
    }

    @Override
    public <T extends android.os.Parcelable> T getParcelableExtra(java.lang.String r1) {
            r0 = this;
            android.os.Parcelable r1 = super.getParcelableExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            return r1
    }

    @Override
    public java.io.Serializable getSerializableExtra(java.lang.String r1) {
            r0 = this;
            java.io.Serializable r1 = super.getSerializableExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            return r1
    }

    @Override
    public short[] getShortArrayExtra(java.lang.String r1) {
            r0 = this;
            short[] r1 = super.getShortArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            short[] r1 = new short[r1]
            return r1
    }

    @Override
    public short getShortExtra(java.lang.String r1, short r2) {
            r0 = this;
            short r1 = super.getShortExtra(r1, r2)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            return r2
    }

    @Override
    public java.lang.String[] getStringArrayExtra(java.lang.String r1) {
            r0 = this;
            java.lang.String[] r1 = super.getStringArrayExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            java.lang.String[] r1 = new java.lang.String[r1]
            return r1
    }

    @Override
    public java.util.ArrayList<java.lang.String> getStringArrayListExtra(java.lang.String r1) {
            r0 = this;
            java.util.ArrayList r1 = super.getStringArrayListExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            return r1
    }

    @Override
    public java.lang.String getStringExtra(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = super.getStringExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            java.lang.String r1 = ""
            return r1
    }

    @Override
    public boolean hasExtra(java.lang.String r1) {
            r0 = this;
            boolean r1 = super.hasExtra(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = 0
            return r1
    }
}
