.class Lcom/czhj/sdk/common/ClientMetadata$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/ClientMetadata;->b()Ljava/lang/String;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/sdk/common/ClientMetadata;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/ClientMetadata;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/ClientMetadata$1;->a:Lcom/czhj/sdk/common/ClientMetadata;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public OnIdsAvalid(Ljava/lang/String;)V
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/sdk/common/ClientMetadata$1;->a:Lcom/czhj/sdk/common/ClientMetadata;

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/ClientMetadata;->a(Lcom/czhj/sdk/common/ClientMetadata;Ljava/lang/String;)Ljava/lang/String;

    iget-object v0, p0, Lcom/czhj/sdk/common/ClientMetadata$1;->a:Lcom/czhj/sdk/common/ClientMetadata;

    invoke-static {v0}, Lcom/czhj/sdk/common/ClientMetadata;->a(Lcom/czhj/sdk/common/ClientMetadata;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/sdk/common/ClientMetadata$1;->a:Lcom/czhj/sdk/common/ClientMetadata;

    invoke-static {v0}, Lcom/czhj/sdk/common/ClientMetadata;->b(Lcom/czhj/sdk/common/ClientMetadata;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/SharedPreferencesUtil;->getSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "sigandroid_mtadb"

    invoke-static {p1, v1}, Lcom/czhj/sdk/common/utils/AESUtil;->EncryptString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "oaid_aes"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_0
    return-void
.end method
