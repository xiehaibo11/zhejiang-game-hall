.class public Lcom/sigmob/sdk/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/b$a;
    }
.end annotation


# static fields
.field private static a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field private static b:Landroid/content/Context;

.field private static c:Lcom/sigmob/sdk/b$a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Ljava/lang/ref/WeakReference;)Ljava/lang/ref/WeakReference;
    .locals 0

    sput-object p0, Lcom/sigmob/sdk/b;->a:Ljava/lang/ref/WeakReference;

    return-object p0
.end method

.method public static a()V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/b;->c:Lcom/sigmob/sdk/b$a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/b$a;

    invoke-direct {v0}, Lcom/sigmob/sdk/b$a;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/b;->c:Lcom/sigmob/sdk/b$a;

    :cond_0
    return-void
.end method

.method public static a(Landroid/content/Context;)V
    .locals 3

    sget-object v0, Lcom/sigmob/sdk/b;->b:Landroid/content/Context;

    if-nez v0, :cond_1

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/b;->b:Landroid/content/Context;

    const-string v1, "wind"

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/utils/b;->a(Landroid/content/Context;Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/b;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/sigmob/sdk/b;->b(Landroid/content/Context;)V

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->e()V

    sget-object v0, Lcom/sigmob/sdk/b;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/sigmob/sdk/base/db/a;->a(Landroid/content/Context;)V

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAds;->getOptions()Lcom/sigmob/windad/WindAdOptions;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdOptions;->getCustomController()Lcom/sigmob/windad/WindCustomController;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdOptions;->getCustomController()Lcom/sigmob/windad/WindCustomController;

    move-result-object p0

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/b;->b:Landroid/content/Context;

    new-instance v2, Lcom/sigmob/sdk/b$1;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/b$1;-><init>(Lcom/sigmob/windad/WindCustomController;)V

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/ClientMetadata;->initializeWithController(Landroid/content/Context;Lcom/czhj/sdk/common/CustomController;)V

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/czhj/sdk/common/ClientMetadata;->initialize(Landroid/content/Context;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static b()Landroid/content/Context;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/b;->b:Landroid/content/Context;

    return-object v0
.end method

.method private static b(Landroid/content/Context;)V
    .locals 1

    invoke-static {}, Lcom/sigmob/sdk/base/i;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/network/Networking;->AddSigmobServerURL(Ljava/lang/String;)V

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->l()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/network/Networking;->AddSigmobServerURL(Ljava/lang/String;)V

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->m()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/network/Networking;->AddSigmobServerURL(Ljava/lang/String;)V

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->k()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/network/Networking;->AddSigmobServerURL(Ljava/lang/String;)V

    invoke-static {p0}, Lcom/czhj/sdk/common/network/Networking;->initialize(Landroid/content/Context;)V

    return-void
.end method

.method public static c()Z
    .locals 3

    sget-object v0, Lcom/sigmob/sdk/b;->b:Landroid/content/Context;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    const-string v2, "audio"

    invoke-virtual {v0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/media/AudioManager;

    if-eqz v0, :cond_0

    const/4 v2, 0x3

    invoke-virtual {v0, v2}, Landroid/media/AudioManager;->getStreamVolume(I)I

    move-result v0

    if-nez v0, :cond_0

    const/4 v1, 0x1

    :cond_0
    return v1
.end method

.method public static d()Landroid/app/Application;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/b;->b:Landroid/content/Context;

    instance-of v1, v0, Landroid/app/Application;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/app/Application;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static e()Landroid/app/Activity;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/b;->a:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method
