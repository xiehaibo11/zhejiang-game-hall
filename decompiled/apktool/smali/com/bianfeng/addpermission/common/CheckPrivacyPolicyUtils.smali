.class public Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;
.super Ljava/lang/Object;
.source "CheckPrivacyPolicyUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;
    }
.end annotation


# instance fields
.field private activity:Landroid/app/Activity;

.field private checkCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

.field private privacyPolicyCallBack:Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;)V
    .locals 1

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 51
    new-instance v0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$1;-><init>(Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->privacyPolicyCallBack:Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;

    .line 18
    iput-object p1, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->activity:Landroid/app/Activity;

    .line 19
    iput-object p2, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;)Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;
    .locals 0

    .line 12
    iget-object p0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

    return-object p0
.end method

.method private showDialog()V
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->privacyPolicyCallBack:Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->setPolicyCallBack(Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;)V

    .line 48
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->activity:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->showPolicyDialog(Landroid/app/Activity;)V

    return-void
.end method


# virtual methods
.method public check()V
    .locals 2

    .line 23
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->activity:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getIsFirst()Z

    move-result v0

    .line 24
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/cache/YmnSharedPreferencesUtils;->isAgreeprivacy()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 26
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;->onAgree()V

    return-void

    :cond_0
    if-eqz v0, :cond_1

    .line 31
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->activity:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->setIsFirst(Z)V

    .line 32
    invoke-direct {p0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->showDialog()V

    return-void

    .line 37
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->activity:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getAgreePolicy()Z

    move-result v0

    if-nez v0, :cond_2

    .line 39
    invoke-direct {p0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->showDialog()V

    return-void

    .line 42
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;->onAgree()V

    return-void
.end method
