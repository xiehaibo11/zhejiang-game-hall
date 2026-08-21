.class Lcom/bianfeng/toponad/ToponAdInterface$3;
.super Lcom/bykv/vk/openvk/TTCustomController;
.source "ToponAdInterface.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/toponad/ToponAdInterface;->initTopon(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/toponad/ToponAdInterface;

.field final synthetic val$mcontext:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/bianfeng/toponad/ToponAdInterface;Landroid/content/Context;)V
    .locals 0

    .line 286
    iput-object p1, p0, Lcom/bianfeng/toponad/ToponAdInterface$3;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    iput-object p2, p0, Lcom/bianfeng/toponad/ToponAdInterface$3;->val$mcontext:Landroid/content/Context;

    invoke-direct {p0}, Lcom/bykv/vk/openvk/TTCustomController;-><init>()V

    return-void
.end method


# virtual methods
.method public isCanUseLocation()Z
    .locals 3

    .line 289
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x1

    const/16 v2, 0x17

    if-lt v0, v2, :cond_1

    .line 290
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$3;->val$mcontext:Landroid/content/Context;

    const-string v2, "android.permission.ACCESS_FINE_LOCATION"

    invoke-virtual {v0, v2}, Landroid/content/Context;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    return v1
.end method

.method public isCanUsePhoneState()Z
    .locals 3

    .line 306
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x1

    const/16 v2, 0x17

    if-lt v0, v2, :cond_1

    .line 307
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$3;->val$mcontext:Landroid/content/Context;

    const-string v2, "android.permission.READ_PHONE_STATE"

    invoke-virtual {v0, v2}, Landroid/content/Context;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    return v1
.end method

.method public isCanUseWriteExternal()Z
    .locals 3

    .line 323
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x1

    const/16 v2, 0x17

    if-lt v0, v2, :cond_1

    .line 324
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$3;->val$mcontext:Landroid/content/Context;

    const-string v2, "android.permission.WRITE_EXTERNAL_STORAGE"

    invoke-virtual {v0, v2}, Landroid/content/Context;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    return v1
.end method
