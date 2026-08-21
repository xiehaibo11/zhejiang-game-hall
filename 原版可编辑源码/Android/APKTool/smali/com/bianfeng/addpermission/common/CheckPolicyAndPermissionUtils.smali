.class public Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;
.super Ljava/lang/Object;
.source "CheckPolicyAndPermissionUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;
    }
.end annotation


# instance fields
.field private checkCallback:Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;

.field private policyCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

.field private policyUtils:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;)V
    .locals 1

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    new-instance v0, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$1;-><init>(Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;->policyCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

    .line 23
    iput-object p2, p0, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;

    .line 24
    new-instance p2, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;

    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;->policyCallback:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

    invoke-direct {p2, p1, v0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;-><init>(Landroid/app/Activity;Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;)V

    iput-object p2, p0, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;->policyUtils:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;

    .line 25
    invoke-virtual {p2}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->check()V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;)Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;
    .locals 0

    .line 5
    iget-object p0, p0, Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPolicyAndPermissionUtils$CheckCallback;

    return-object p0
.end method
