.class Lcom/bytedance/android/openliveplugin/LivePluginHelper$3;
.super Lcom/bytedance/pangle/ZeusPluginStateListener;


# instance fields
.field final synthetic val$task:Ljava/lang/Runnable;


# direct methods
.method constructor <init>(Ljava/lang/Runnable;)V
    .locals 0

    .line 172
    iput-object p1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$3;->val$task:Ljava/lang/Runnable;

    invoke-direct {p0}, Lcom/bytedance/pangle/ZeusPluginStateListener;-><init>()V

    return-void
.end method


# virtual methods
.method public varargs onPluginStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V
    .locals 0

    .line 175
    iget-object p3, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$3;->val$task:Ljava/lang/Runnable;

    if-eqz p3, :cond_1

    const-string p3, "com.byted.live.lite"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x6

    if-ne p2, p1, :cond_1

    .line 176
    invoke-static {p3}, Lcom/bytedance/pangle/Zeus;->isPluginLoaded(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 177
    iget-object p1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$3;->val$task:Ljava/lang/Runnable;

    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    goto :goto_0

    .line 179
    :cond_0
    invoke-static {p3}, Lcom/bytedance/pangle/Zeus;->loadPlugin(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 180
    iget-object p1, p0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$3;->val$task:Ljava/lang/Runnable;

    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    :cond_1
    :goto_0
    return-void
.end method
