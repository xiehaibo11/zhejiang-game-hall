.class public Lcom/tencent/open/utils/f;
.super Ljava/lang/Object;
.source "ProGuard"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tencent/open/utils/f$a;
    }
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 20
    iput-object v0, p0, Lcom/tencent/open/utils/f;->a:Ljava/lang/String;

    .line 22
    iput-object v0, p0, Lcom/tencent/open/utils/f;->b:Ljava/lang/String;

    return-void
.end method

.method synthetic constructor <init>(Lcom/tencent/open/utils/f$1;)V
    .locals 0

    .line 13
    invoke-direct {p0}, Lcom/tencent/open/utils/f;-><init>()V

    return-void
.end method

.method public static a()Lcom/tencent/open/utils/f;
    .locals 1

    .line 33
    invoke-static {}, Lcom/tencent/open/utils/f$a;->a()Lcom/tencent/open/utils/f;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public a(Landroid/content/Context;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x4

    const-string v1, "device_info_file"

    .line 40
    invoke-virtual {p1, v1, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    .line 41
    iget-object v0, p0, Lcom/tencent/open/utils/f;->b:Ljava/lang/String;

    const-string v1, "openSDK_LOG.DeviceInfoUtils"

    const-string v2, ""

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_2

    :cond_1
    const-string v0, "build_model"

    .line 42
    invoke-interface {p1, v0, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tencent/open/utils/f;->b:Ljava/lang/String;

    .line 43
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "init, model = "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tencent/open/utils/f;->b:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 45
    :cond_2
    iget-object v0, p0, Lcom/tencent/open/utils/f;->a:Ljava/lang/String;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_4

    :cond_3
    const-string v0, "build_device"

    .line 46
    invoke-interface {p1, v0, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tencent/open/utils/f;->a:Ljava/lang/String;

    .line 47
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "init, device = "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tencent/open/utils/f;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    return-void
.end method

.method public a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 5

    .line 76
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setBuildModel, model = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "openSDK_LOG.DeviceInfoUtils"

    invoke-static {v1, v0}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "build_model"

    const/4 v2, 0x4

    const-string v3, "device_info_file"

    if-eqz p2, :cond_2

    .line 77
    invoke-virtual {p2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_0

    goto :goto_0

    .line 84
    :cond_0
    iget-object v4, p0, Lcom/tencent/open/utils/f;->b:Ljava/lang/String;

    if-eqz v4, :cond_1

    invoke-virtual {v4, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    const-string p1, "setBuildModel, needn\'t update sp."

    .line 85
    invoke-static {v1, p1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 88
    :cond_1
    iput-object p2, p0, Lcom/tencent/open/utils/f;->b:Ljava/lang/String;

    if-eqz p1, :cond_3

    .line 90
    invoke-virtual {p1, v3, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    .line 91
    invoke-interface {p1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    iget-object p2, p0, Lcom/tencent/open/utils/f;->b:Ljava/lang/String;

    invoke-interface {p1, v0, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    const-string p1, "setBuildModel, update sp."

    .line 92
    invoke-static {v1, p1}, Lcom/tencent/open/log/SLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    :goto_0
    const-string p2, ""

    .line 78
    iput-object p2, p0, Lcom/tencent/open/utils/f;->b:Ljava/lang/String;

    if-eqz p1, :cond_3

    .line 80
    invoke-virtual {p1, v3, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    .line 81
    invoke-interface {p1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1, v0}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_3
    :goto_1
    return-void
.end method

.method public b()Ljava/lang/String;
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/tencent/open/utils/f;->b:Ljava/lang/String;

    return-object v0
.end method

.method public b(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 58
    iget-object p1, p0, Lcom/tencent/open/utils/f;->a:Ljava/lang/String;

    return-object p1
.end method

.method public c(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 68
    iget-object p1, p0, Lcom/tencent/open/utils/f;->b:Ljava/lang/String;

    return-object p1
.end method
