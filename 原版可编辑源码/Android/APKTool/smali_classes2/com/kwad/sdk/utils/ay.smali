.class public final Lcom/kwad/sdk/utils/ay;
.super Ljava/lang/Object;


# static fields
.field private static TAG:Ljava/lang/String; = "plugin.signature"


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private static cV(Landroid/content/Context;)[Landroid/content/pm/Signature;
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v2, 0x40

    invoke-virtual {v1, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->signatures:[Landroid/content/pm/Signature;
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p0

    goto :goto_0

    :catch_0
    move-exception p0

    sget-object v1, Lcom/kwad/sdk/utils/ay;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Can not get signature, error = "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Landroid/content/pm/PackageManager$NameNotFoundException;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v1, Lcom/kwad/sdk/utils/ay;->TAG:Ljava/lang/String;

    invoke-static {v1, p0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-object v0
.end method

.method public static cW(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    :try_start_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/ay;->cV(Landroid/content/Context;)[Landroid/content/pm/Signature;

    move-result-object p0

    if-eqz p0, :cond_1

    array-length v1, p0

    if-gtz v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    aget-object p0, p0, v1

    invoke-virtual {p0}, Landroid/content/pm/Signature;->toByteArray()[B

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/utils/ad;->l([B)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :cond_1
    :goto_0
    return-object v0

    :catch_0
    move-exception p0

    sget-object v1, Lcom/kwad/sdk/utils/ay;->TAG:Ljava/lang/String;

    invoke-static {v1, p0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/Throwable;)V

    return-object v0
.end method
