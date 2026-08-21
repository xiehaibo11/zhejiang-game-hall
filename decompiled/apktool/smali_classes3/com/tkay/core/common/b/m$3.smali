.class final Lcom/tkay/core/common/b/m$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Lcom/tkay/core/api/DeviceInfoCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/core/api/DeviceInfoCallback;

.field final synthetic c:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;Lcom/tkay/core/api/DeviceInfoCallback;)V
    .locals 0

    .line 1860
    iput-object p1, p0, Lcom/tkay/core/common/b/m$3;->c:Lcom/tkay/core/common/b/m;

    iput-object p2, p0, Lcom/tkay/core/common/b/m$3;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/core/common/b/m$3;->b:Lcom/tkay/core/api/DeviceInfoCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    const-string v0, "a"

    .line 1863
    iget-object v1, p0, Lcom/tkay/core/common/b/m$3;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v1

    const-string v2, ""

    if-eqz v1, :cond_0

    .line 1865
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->F()Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    :cond_0
    move-object v3, v2

    .line 1866
    :goto_0
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const/4 v5, 0x1

    if-nez v4, :cond_2

    .line 1868
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1869
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 1870
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-ne v0, v5, :cond_1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    move v5, v0

    .line 1877
    :catch_0
    :cond_2
    :goto_1
    :try_start_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 1878
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 1880
    invoke-interface {v3, v0, v1}, Lcom/tkay/core/api/IExHandler;->fillTestDeviceData(Lorg/json/JSONObject;Lcom/tkay/core/c/a;)V

    :cond_3
    const-string v1, "GAID"

    .line 1882
    iget-object v3, p0, Lcom/tkay/core/common/b/m$3;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/tkay/core/common/l/d;->r(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "AndroidID"

    if-eqz v5, :cond_4

    .line 1883
    iget-object v2, p0, Lcom/tkay/core/common/b/m$3;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    :cond_4
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "How to config TestMode"

    const-string v2, "Please visit the document center and learn more through: Integration(Basic) -> How To Test"

    .line 1884
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "testModeDeviceInfo"

    .line 1885
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1886
    iget-object v1, p0, Lcom/tkay/core/common/b/m$3;->b:Lcom/tkay/core/api/DeviceInfoCallback;

    if-eqz v1, :cond_5

    .line 1887
    iget-object v1, p0, Lcom/tkay/core/common/b/m$3;->b:Lcom/tkay/core/api/DeviceInfoCallback;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, v0}, Lcom/tkay/core/api/DeviceInfoCallback;->deviceInfo(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_5
    return-void
.end method
