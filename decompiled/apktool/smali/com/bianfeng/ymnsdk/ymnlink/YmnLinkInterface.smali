.class public Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "YmnLinkInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field private static final CODE_GET_URI_FAILURE:I = 0x642

.field private static final CODE_GET_URI_SUCCESS:I = 0x641

.field private static final IDENTIFIER:Ljava/lang/String; = "\uff04"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method

.method private cleanClipBoardContent()V
    .locals 3

    .line 101
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->isYmnClipAllow()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 103
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "clipboard"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/ClipboardManager;

    if-eqz v0, :cond_1

    const-string v1, "data"

    const-string v2, ""

    .line 105
    invoke-static {v1, v2}, Landroid/content/ClipData;->newPlainText(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;

    move-result-object v1

    .line 106
    invoke-virtual {v0, v1}, Landroid/content/ClipboardManager;->setPrimaryClip(Landroid/content/ClipData;)V

    :cond_1
    return-void
.end method

.method private getClipBoardContent()Ljava/lang/String;
    .locals 3

    .line 86
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->isYmnClipAllow()Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 88
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "clipboard"

    invoke-virtual {v0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/ClipboardManager;

    if-eqz v0, :cond_1

    .line 89
    invoke-virtual {v0}, Landroid/content/ClipboardManager;->hasPrimaryClip()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 90
    invoke-virtual {v0}, Landroid/content/ClipboardManager;->getPrimaryClip()Landroid/content/ClipData;

    move-result-object v0

    const/4 v2, 0x0

    .line 91
    invoke-virtual {v0, v2}, Landroid/content/ClipData;->getItemAt(I)Landroid/content/ClipData$Item;

    move-result-object v0

    .line 92
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Landroid/content/ClipData$Item;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    return-object v1
.end method

.method private getLinkCode(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-string v0, "\uff04"

    .line 76
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    array-length v1, v1

    const/4 v2, 0x2

    if-lt v1, v2, :cond_0

    .line 77
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x1

    aget-object p1, p1, v0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method


# virtual methods
.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "29"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "ymnlink"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x11

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "2.0.0"

    return-object v0
.end method

.method public getUriData()V
    .locals 5
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "get_uri"
    .end annotation

    .line 49
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "----------------get uri from intent----------------------"

    .line 50
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 51
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "get uri from intent "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 52
    invoke-virtual {v0}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v2

    goto :goto_0

    :cond_0
    move-object v2, v1

    :goto_0
    if-nez v2, :cond_1

    .line 54
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkCache;->getLaunchData()Landroid/net/Uri;

    move-result-object v2

    .line 55
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkCache;->clearLaunchData()V

    :cond_1
    const/16 v3, 0x641

    const-string v4, "get_uri"

    if-eqz v2, :cond_2

    .line 58
    invoke-virtual {v2}, Landroid/net/Uri;->getQuery()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v3, v2, v4}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 59
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    goto :goto_1

    .line 61
    :cond_2
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->getClipBoardContent()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->getLinkCode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 62
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 63
    invoke-virtual {p0, v3, v0, v4}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 64
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->cleanClipBoardContent()V

    goto :goto_1

    :cond_3
    const/16 v0, 0x642

    const-string v1, "uri is null & ymnlinkstr is null"

    .line 66
    invoke-virtual {p0, v0, v1, v4}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public onNewIntent(Landroid/content/Intent;)V
    .locals 3

    .line 112
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onNewIntent intent = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 113
    invoke-virtual {p1}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v0

    .line 114
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onNewIntent uri = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const-string v1, "get_uri"

    if-eqz v0, :cond_0

    const/16 v2, 0x641

    .line 116
    invoke-virtual {v0}, Landroid/net/Uri;->getQuery()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v2, v0, v1}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 117
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    goto :goto_0

    :cond_0
    const/16 p1, 0x642

    const-string v0, "uri is null"

    .line 119
    invoke-virtual {p0, p1, v0, v1}, Lcom/bianfeng/ymnsdk/ymnlink/YmnLinkInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
