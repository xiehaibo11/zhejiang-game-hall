.class public Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;
.super Ljava/lang/Object;
.source "PolicyConstantsUtils.java"


# static fields
.field private static NOT_NEED_SPLASH:Ljava/lang/String; = "ADD_PERMISSION_NOT_NEED_SPLASH"

.field private static assetsHtml:Ljava/lang/String; = "file:android_asset/"

.field private static contentTv:Ljava/lang/String; = "ANDPERMISSION_POLICY_CONTENT"

.field private static game:Ljava/lang/String; = "ANDPERMISSION_POLICY_GAME_URL"

.field public static gameFlag:Ljava/lang/String; = "gameFlag"

.field private static user:Ljava/lang/String; = "ANDPERMISSION_POLICY_USER_URL"

.field public static userFlag:Ljava/lang/String; = "userFlag"


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getContentTv(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 47
    sget-object v0, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->contentTv:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 48
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, ""

    :cond_0
    return-object p0
.end method

.method public static getDialogPolicyTitle(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 65
    sget-object v0, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->userFlag:Ljava/lang/String;

    invoke-virtual {v0, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, "\u670d\u52a1\u534f\u8bae"

    return-object p0

    .line 67
    :cond_0
    sget-object v0, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->gameFlag:Ljava/lang/String;

    invoke-virtual {v0, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    const-string p0, "\u9690\u79c1\u653f\u7b56"

    return-object p0

    :cond_1
    const-string p0, ""

    return-object p0
.end method

.method private static getGameUrl(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 35
    sget-object v0, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->game:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 36
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    const-string v0, "https"

    .line 39
    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "http"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 42
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->assetsHtml:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :cond_2
    :goto_0
    return-object p0
.end method

.method public static getUrl(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 55
    sget-object v0, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->userFlag:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 56
    invoke-static {p0}, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->getUserUrl(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 57
    :cond_0
    sget-object v0, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->gameFlag:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 58
    invoke-static {p0}, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->getGameUrl(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const-string p0, ""

    return-object p0
.end method

.method private static getUserUrl(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 23
    sget-object v0, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->user:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 24
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    const-string v0, "https"

    .line 27
    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "http"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 30
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->assetsHtml:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :cond_2
    :goto_0
    return-object p0
.end method

.method public static isNotNeedSplash(Landroid/content/Context;)Z
    .locals 2

    .line 75
    sget-object v0, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->NOT_NEED_SPLASH:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 76
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const-string v0, "YES"

    .line 79
    invoke-virtual {v0, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v1
.end method
