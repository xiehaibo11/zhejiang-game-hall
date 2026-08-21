package android.support.v4.provider;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.provider.DocumentsContract;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.util.Log;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.loader.p.PluginProviderClient;
import java.util.ArrayList;

@RequiresApi(21)
class TreeDocumentFile extends DocumentFile {
    private Context mContext;
    private Uri mUri;

    TreeDocumentFile(@Nullable DocumentFile r1, Context r2, Uri r3) {
        super(r1);
        this.mContext = r2;
        this.mUri = r3;
    }

    @Override
    @Nullable
    public DocumentFile createFile(String r3, String r4) {
        Uri r32 = createFile(this.mContext, this.mUri, r3, r4);
        if (r32 != null) goto L7;
        return null;
    L7:
        return new TreeDocumentFile(this, this.mContext, r32);
    }

    @Nullable
    private static Uri createFile(Context r0, Uri r1, String r2, String r3) {
        return DocumentsContract.createDocument(r0.getContentResolver(), r1, r2, r3);
    L4:
        return null;
    }

    @Override
    @Nullable
    public DocumentFile createDirectory(String r4) {
        Uri r42 = createFile(this.mContext, this.mUri, "vnd.android.document/directory", r4);
        if (r42 != null) goto L7;
        return null;
    L7:
        return new TreeDocumentFile(this, this.mContext, r42);
    }

    @Override
    public Uri getUri() {
        return this.mUri;
    }

    @Override
    @Nullable
    public String getName() {
        return DocumentsContractApi19.getName(this.mContext, this.mUri);
    }

    @Override
    @Nullable
    public String getType() {
        return DocumentsContractApi19.getType(this.mContext, this.mUri);
    }

    @Override
    public boolean isDirectory() {
        return DocumentsContractApi19.isDirectory(this.mContext, this.mUri);
    }

    @Override
    public boolean isFile() {
        return DocumentsContractApi19.isFile(this.mContext, this.mUri);
    }

    @Override
    public boolean isVirtual() {
        return DocumentsContractApi19.isVirtual(this.mContext, this.mUri);
    }

    @Override
    public long lastModified() {
        return DocumentsContractApi19.lastModified(this.mContext, this.mUri);
    }

    @Override
    public long length() {
        return DocumentsContractApi19.length(this.mContext, this.mUri);
    }

    @Override
    public boolean canRead() {
        return DocumentsContractApi19.canRead(this.mContext, this.mUri);
    }

    @Override
    public boolean canWrite() {
        return DocumentsContractApi19.canWrite(this.mContext, this.mUri);
    }

    @Override
    public boolean delete() {
        return DocumentsContract.deleteDocument(this.mContext.getContentResolver(), this.mUri);
    L4:
        return false;
    }

    @Override
    public boolean exists() {
        return DocumentsContractApi19.exists(this.mContext, this.mUri);
    }

    @Override
    public DocumentFile[] listFiles() {
        this.mContext.getContentResolver();
        Uri r0 = this.mUri;
        Uri r3 = DocumentsContract.buildChildDocumentsUriUsingTree(r0, DocumentsContract.getDocumentId(r0));
        ArrayList r02 = new ArrayList();
        int r1 = 0;
        Cursor r8 = null;
        r8 = PluginProviderClient.query(RePlugin.getPluginContext(), r3, new String[]{"document_id"}, null, null, null);     // Catch: Throwable -> L9 Exception -> L11
    L4:
        if (r8.moveToNext() == false) goto L8;
        r02.add(DocumentsContract.buildDocumentUriUsingTree(this.mUri, r8.getString(0)));     // Catch: Throwable -> L9 Exception -> L11
    L8:
        closeQuietly(r8);
        Uri[] r03 = (Uri[]) r02.toArray(new Uri[r02.size()]);
        DocumentFile[] r2 = new DocumentFile[r03.length];
    L16:
        if (r1 >= r03.length) goto L18;
        r2[r1] = new TreeDocumentFile(this, this.mContext, r03[r1]);
        r1 = r1 + 1;
        goto L16
    L18:
        return r2;
    L11:
        e = move-exception;
        Log.w("DocumentFile", "Failed query: " + e);     // Catch: Throwable -> L9
    L9:
        th = move-exception;
        closeQuietly(r8);
        throw th;
    }

    private static void closeQuietly(@Nullable AutoCloseable r0) {
        if (r0 != null) goto L9;
        return;
    L9:
        r0.close();     // Catch: RuntimeException -> L5 Exception -> L8
        goto L12
    L11:
        return;
    L5:
        e = move-exception;
        throw e;
    }

    @Override
    public boolean renameTo(String r4) {
        Uri r42 = DocumentsContract.renameDocument(this.mContext.getContentResolver(), this.mUri, r4);     // Catch: Exception -> L9
        if (r42 == null) goto L8;
        this.mUri = r42;     // Catch: Exception -> L9
        return true;
    L8:
        return false;
    }
}
