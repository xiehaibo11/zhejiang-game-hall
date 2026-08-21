.class public Lcom/qihoo360/loader/utils/PackageUtils;
.super Ljava/lang/Object;
.source "PackageUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getPackageArchiveInfo(Landroid/content/pm/PackageManager;Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    .locals 0

    .line 39
    :try_start_0
    invoke-virtual {p0, p1, p2}, Landroid/content/pm/PackageManager;->getPackageArchiveInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 41
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    .line 42
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method
