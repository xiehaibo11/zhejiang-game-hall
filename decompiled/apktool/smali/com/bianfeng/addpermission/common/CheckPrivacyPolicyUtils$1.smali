.class Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$1;
.super Ljava/lang/Object;
.source "CheckPrivacyPolicyUtils.java"

# interfaces
.implements Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAllow()V
    .locals 1

    .line 54
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->access$000(Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;)Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;->onAgree()V

    return-void
.end method

.method public onRefuse()V
    .locals 1

    .line 59
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$1;->this$0:Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;->access$000(Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils;)Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPrivacyPolicyUtils$CheckCallback;->onRefuse()V

    return-void
.end method
