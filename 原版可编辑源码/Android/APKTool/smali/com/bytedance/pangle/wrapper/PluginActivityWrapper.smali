.class public Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;
.super Lcom/bytedance/pangle/wrapper/GenerateActivityWrapper;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/bytedance/pangle/PluginContext;)V
    .locals 3

    const-string v0, "mBase"

    .line 28
    invoke-direct {p0}, Lcom/bytedance/pangle/wrapper/GenerateActivityWrapper;-><init>()V

    .line 29
    iput-object p1, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;->mOriginActivity:Landroid/app/Activity;

    .line 30
    iput-object p2, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;->pluginContext:Lcom/bytedance/pangle/PluginContext;

    .line 31
    iget-object v1, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;->mOriginActivity:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->isDestroyed()Z

    move-result v1

    if-nez v1, :cond_0

    .line 34
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v1

    new-instance v2, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper$1;

    invoke-direct {v2, p0}, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper$1;-><init>(Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;)V

    invoke-virtual {v1, v2}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    .line 46
    :cond_0
    :try_start_0
    invoke-static {p0, v0, p2}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    .line 47
    invoke-static {}, Lcom/bytedance/pangle/util/i;->a()Z

    move-result v1

    if-nez v1, :cond_1

    .line 48
    const-class v1, Landroid/content/ContextWrapper;

    invoke-static {v1, v0}, Lcom/bytedance/pangle/util/FieldUtils;->getField(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    .line 49
    invoke-static {v0, p0, p2}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/reflect/Field;Ljava/lang/Object;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 52
    invoke-virtual {p2}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    :cond_1
    :goto_0
    :try_start_1
    const-string p2, "mApplication"

    .line 55
    invoke-virtual {p1}, Landroid/app/Activity;->getApplication()Landroid/app/Application;

    move-result-object v0

    invoke-static {p0, p2, v0}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_1
    .catch Ljava/lang/IllegalAccessException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p2

    .line 57
    invoke-virtual {p2}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    .line 59
    :goto_1
    invoke-static {p0, p1}, Lcom/bytedance/pangle/util/a;->a(Lcom/bytedance/pangle/wrapper/a;Landroid/app/Activity;)V

    return-void
.end method
