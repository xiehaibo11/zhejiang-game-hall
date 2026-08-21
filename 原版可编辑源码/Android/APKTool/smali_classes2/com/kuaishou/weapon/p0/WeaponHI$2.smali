.class final Lcom/kuaishou/weapon/p0/WeaponHI$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kuaishou/weapon/p0/WeaponHI;->init(Landroid/content/Context;Lcom/kuaishou/weapon/p0/IWeaponInitParams;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;


# direct methods
.method constructor <init>(Lcom/kuaishou/weapon/p0/IWeaponInitParams;)V
    .locals 0

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/WeaponHI$2;->a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    const-string v0, "5.2.1"

    :try_start_0
    iget-object v1, p0, Lcom/kuaishou/weapon/p0/WeaponHI$2;->a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    sput-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->mParams:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/WeaponHI$2;->a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    invoke-interface {v1}, Lcom/kuaishou/weapon/p0/IWeaponInitParams;->getAppKey()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->sKSAppkey:Ljava/lang/String;

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/WeaponHI$2;->a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    invoke-interface {v1}, Lcom/kuaishou/weapon/p0/IWeaponInitParams;->getSecKey()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->sKSSecKey:Ljava/lang/String;

    sput-object v0, Lcom/kuaishou/weapon/p0/WeaponHI;->sKSSdkver:Ljava/lang/String;

    sget-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/bg;->q(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->hostVersionName:Ljava/lang/String;

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/WeaponHI$2;->a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    invoke-interface {v1}, Lcom/kuaishou/weapon/p0/IWeaponInitParams;->getDeviceId()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->sKDeviceId:Ljava/lang/String;

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/WeaponHI$2;->a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    invoke-interface {v1}, Lcom/kuaishou/weapon/p0/IWeaponInitParams;->getProductName()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->skProductName:Ljava/lang/String;

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/WeaponHI$2;->a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    invoke-interface {v1}, Lcom/kuaishou/weapon/p0/IWeaponInitParams;->getUserId()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->sUserId:Ljava/lang/String;

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/WeaponHI$2;->a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    invoke-interface {v1}, Lcom/kuaishou/weapon/p0/IWeaponInitParams;->getChannel()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->sChannel:Ljava/lang/String;

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/WeaponHI$2;->a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    invoke-interface {v1}, Lcom/kuaishou/weapon/p0/IWeaponInitParams;->getAPPLISTSwitch()Z

    move-result v1

    sput-boolean v1, Lcom/kuaishou/weapon/p0/WeaponHI;->as:Z

    sget-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/bg;->B(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->cookieData:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    sget-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->mContext:Landroid/content/Context;

    const-string v2, "re_po_rt"

    invoke-static {v1, v2}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v1

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "k"

    invoke-static {}, Lcom/kuaishou/weapon/p0/cl;->m()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "d"

    sget-object v4, Lcom/kuaishou/weapon/p0/WeaponHI;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/cl;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "a"

    sget-object v4, Lcom/kuaishou/weapon/p0/WeaponHI;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bg;->q(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "p"

    sget-object v4, Lcom/kuaishou/weapon/p0/WeaponHI;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/bg;->s(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "s"

    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "n"

    const-string v3, "plc001_v"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 v3, 0x1

    goto :goto_0

    :cond_0
    const/4 v3, 0x0

    :goto_0
    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    new-instance v0, Lcom/kuaishou/weapon/p0/bm;

    sget-object v3, Lcom/kuaishou/weapon/p0/WeaponHI;->mContext:Landroid/content/Context;

    invoke-direct {v0, v3}, Lcom/kuaishou/weapon/p0/bm;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/kuaishou/weapon/p0/bm;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kuaishou/weapon/p0/WeaponHI;->encryENV:Ljava/lang/String;

    const-string v0, "plc001_f_is"

    invoke-virtual {v1, v0}, Lcom/kuaishou/weapon/p0/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "\\|"

    invoke-virtual {v0, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    sput-object v0, Lcom/kuaishou/weapon/p0/WeaponHI;->isList:Ljava/util/List;

    const-string v0, "plc001_f_ii"

    const/4 v2, 0x5

    invoke-virtual {v1, v0, v2}, Lcom/kuaishou/weapon/p0/h;->c(Ljava/lang/String;I)I

    move-result v0

    sput v0, Lcom/kuaishou/weapon/p0/WeaponHI;->ii:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_1
    :try_start_2
    sget-object v0, Lcom/kuaishou/weapon/p0/WeaponHI;->sKSAppkey:Ljava/lang/String;

    sget-object v1, Lcom/kuaishou/weapon/p0/WeaponHI;->sKSSecKey:Ljava/lang/String;

    iget-object v2, p0, Lcom/kuaishou/weapon/p0/WeaponHI$2;->a:Lcom/kuaishou/weapon/p0/IWeaponInitParams;

    invoke-interface {v2}, Lcom/kuaishou/weapon/p0/IWeaponInitParams;->getPrivacySwitch()Z

    move-result v2

    invoke-static {v0, v1, v2}, Lcom/kuaishou/weapon/p0/WeaponHI;->access$000(Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    return-void
.end method
