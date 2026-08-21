.class Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;
.super Landroid/text/style/ClickableSpan;
.source "ShowPrivacyPolicyDialog.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->initcheckPolicy()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;


# direct methods
.method constructor <init>(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-direct {p0}, Landroid/text/style/ClickableSpan;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 6

    .line 126
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 127
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->access$000(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)J

    move-result-wide v2

    sub-long v2, v0, v2

    const-wide/16 v4, 0x1f4

    cmp-long p1, v2, v4

    if-gez p1, :cond_0

    .line 128
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-static {p1, v0, v1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->access$002(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;J)J

    return-void

    .line 131
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-static {p1, v0, v1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->access$002(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;J)J

    .line 132
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->access$100(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)Landroid/app/Activity;

    move-result-object p1

    const-string v0, "OPEN_PRIVACY_POLICY_WITH_BROWER"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "open"

    .line 133
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 134
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->access$100(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)Landroid/app/Activity;

    move-result-object p1

    sget-object v0, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->userFlag:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->getUrl(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 135
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->access$100(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getPolicyDialogShow()Z

    move-result v0

    if-nez v0, :cond_2

    .line 136
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->access$100(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->openBrowser(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    .line 139
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->access$100(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)Landroid/app/Activity;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getPolicyDialogShow()Z

    move-result p1

    if-nez p1, :cond_2

    .line 140
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;->this$0:Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-static {p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->access$100(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)Landroid/app/Activity;

    move-result-object p1

    sget-object v0, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->userFlag:Ljava/lang/String;

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/ui/ShowPolicyActivity;->start(Landroid/app/Activity;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method
