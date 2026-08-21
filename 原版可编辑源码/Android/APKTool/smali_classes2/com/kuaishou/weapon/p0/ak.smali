.class public Lcom/kuaishou/weapon/p0/ak;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "android.permission.READ_EXTERNAL_STORAGE"

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/kuaishou/weapon/p0/g;->a(Landroid/content/Context;[Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_0

    return v0

    :cond_0
    const-string p0, "/storage/emulated/0/DCIM/Camera/virtual.mp4"

    const-string v1, "/storage/emulated/0/DCIM/Camera1/virtual.mp4"

    filled-new-array {p0, v1}, [Ljava/lang/String;

    move-result-object p0

    move v1, v0

    :goto_0
    const/4 v2, 0x2

    if-ge v1, v2, :cond_2

    new-instance v2, Ljava/io/File;

    aget-object v3, p0, v1

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v2, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catch_0
    :cond_2
    return v0
.end method
