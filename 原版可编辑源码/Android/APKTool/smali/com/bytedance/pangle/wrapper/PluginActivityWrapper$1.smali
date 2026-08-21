.class final Lcom/bytedance/pangle/wrapper/PluginActivityWrapper$1;
.super Lcom/bytedance/pangle/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;-><init>(Landroid/app/Activity;Lcom/bytedance/pangle/PluginContext;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;


# direct methods
.method constructor <init>(Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;)V
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper$1;->a:Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    invoke-direct {p0}, Lcom/bytedance/pangle/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final onActivityDestroyed(Landroid/app/Activity;)V
    .locals 1

    .line 37
    invoke-super {p0, p1}, Lcom/bytedance/pangle/a;->onActivityDestroyed(Landroid/app/Activity;)V

    .line 38
    iget-object v0, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper$1;->a:Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    iget-object v0, v0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;->mOriginActivity:Landroid/app/Activity;

    if-ne p1, v0, :cond_0

    .line 39
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object p1

    invoke-virtual {p1, p0}, Landroid/app/Application;->unregisterActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    :cond_0
    return-void
.end method
