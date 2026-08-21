.class public Lnet/grandcentrix/tray/provider/ResourceManger;
.super Ljava/lang/Object;
.source "ResourceManger.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getId(Landroid/content/Context;Ljava/lang/String;)I
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "sign"    # Ljava/lang/String;

    .line 8
    const-string v0, "\\."

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 9
    .local v0, "strs":[Ljava/lang/String;
    const/4 v1, 0x2

    aget-object v1, v0, v1

    const/4 v2, 0x1

    aget-object v2, v0, v2

    invoke-static {p0, v1, v2}, Lnet/grandcentrix/tray/provider/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    return v1
.end method

.method public static getId(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I
    .locals 2
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "defType"    # Ljava/lang/String;

    .line 14
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, p2, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 15
    :catch_0
    move-exception v0

    .line 16
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 17
    const/4 v1, 0x0

    return v1
.end method
