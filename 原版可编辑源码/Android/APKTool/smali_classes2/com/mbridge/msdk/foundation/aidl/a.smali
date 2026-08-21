.class public final Lcom/mbridge/msdk/foundation/aidl/a;
.super Ljava/lang/Object;
.source "MemoryFileManager.java"


# direct methods
.method public static a(Landroid/os/MemoryFile;)Ljava/io/FileDescriptor;
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "android.os.MemoryFile"

    const-string v2, "getFileDescriptor"

    const/4 v3, 0x0

    new-array v3, v3, [Ljava/lang/Object;

    .line 10
    invoke-static {v1, p0, v2, v3}, Lcom/mbridge/msdk/foundation/aidl/b;->a(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_0

    .line 13
    :try_start_1
    check-cast p0, Ljava/io/FileDescriptor;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object p0

    :catch_0
    :catchall_0
    :cond_0
    return-object v0
.end method
