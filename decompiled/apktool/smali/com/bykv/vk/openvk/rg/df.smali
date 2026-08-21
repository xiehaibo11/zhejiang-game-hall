.class public final Lcom/bykv/vk/openvk/rg/df;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTAdBridge;
.implements Lcom/bykv/vk/openvk/api/proto/Bridge;


# static fields
.field private static volatile rg:Lcom/bykv/vk/openvk/rg/df;


# instance fields
.field private df:Lcom/bykv/vk/openvk/rg/rg;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 45
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 46
    new-instance v0, Lcom/bykv/vk/openvk/rg/rg;

    invoke-direct {v0}, Lcom/bykv/vk/openvk/rg/rg;-><init>()V

    iput-object v0, p0, Lcom/bykv/vk/openvk/rg/df;->df:Lcom/bykv/vk/openvk/rg/rg;

    return-void
.end method

.method public static final rg()Lcom/bykv/vk/openvk/rg/df;
    .locals 2

    .line 50
    sget-object v0, Lcom/bykv/vk/openvk/rg/df;->rg:Lcom/bykv/vk/openvk/rg/df;

    if-nez v0, :cond_1

    .line 51
    const-class v0, Lcom/bykv/vk/openvk/rg/df;

    monitor-enter v0

    .line 52
    :try_start_0
    sget-object v1, Lcom/bykv/vk/openvk/rg/df;->rg:Lcom/bykv/vk/openvk/rg/df;

    if-nez v1, :cond_0

    .line 53
    new-instance v1, Lcom/bykv/vk/openvk/rg/df;

    invoke-direct {v1}, Lcom/bykv/vk/openvk/rg/df;-><init>()V

    sput-object v1, Lcom/bykv/vk/openvk/rg/df;->rg:Lcom/bykv/vk/openvk/rg/df;

    .line 55
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 57
    :cond_1
    :goto_0
    sget-object v0, Lcom/bykv/vk/openvk/rg/df;->rg:Lcom/bykv/vk/openvk/rg/df;

    return-object v0
.end method

.method private rg(Lcom/bykv/vk/openvk/api/proto/EventListener;)V
    .locals 2

    .line 190
    iget-object v0, p0, Lcom/bykv/vk/openvk/rg/df;->df:Lcom/bykv/vk/openvk/rg/rg;

    new-instance v1, Lcom/bykv/vk/openvk/rg/df$2;

    invoke-direct {v1, p0, p1}, Lcom/bykv/vk/openvk/rg/df$2;-><init>(Lcom/bykv/vk/openvk/rg/df;Lcom/bykv/vk/openvk/api/proto/EventListener;)V

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/rg/rg;->rg(Lcom/bykv/vk/openvk/rg/rg$rg;)V

    return-void
.end method


# virtual methods
.method public call(ILcom/bykv/vk/openvk/api/proto/ValueSet;Ljava/lang/Class;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(I",
            "Lcom/bykv/vk/openvk/api/proto/ValueSet;",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    const/4 p3, 0x0

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    .line 176
    :pswitch_0
    const-class p1, Ljava/lang/Object;

    invoke-interface {p2, p3, p1}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->objectValue(ILjava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    .line 177
    instance-of p2, p1, Lcom/bykv/vk/openvk/TTAdEvent;

    if-eqz p2, :cond_0

    .line 178
    check-cast p1, Lcom/bykv/vk/openvk/TTAdEvent;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/rg/df;->subscribe(Lcom/bykv/vk/openvk/TTAdEvent;)V

    goto :goto_0

    .line 179
    :cond_0
    instance-of p2, p1, Lcom/bykv/vk/openvk/api/proto/EventListener;

    if-eqz p2, :cond_2

    .line 180
    check-cast p1, Lcom/bykv/vk/openvk/api/proto/EventListener;

    invoke-direct {p0, p1}, Lcom/bykv/vk/openvk/rg/df;->rg(Lcom/bykv/vk/openvk/api/proto/EventListener;)V

    goto :goto_0

    .line 170
    :pswitch_1
    invoke-interface {p2, p3}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->stringValue(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 171
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_1

    const-string p1, "0.0.0.0"

    :cond_1
    return-object p1

    .line 167
    :pswitch_2
    invoke-interface {p2, p3}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->stringValue(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->isPluginLoaded(Ljava/lang/String;)Z

    move-result p1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    .line 164
    :pswitch_3
    invoke-interface {p2, p3}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->stringValue(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->isPluginInstalled(Ljava/lang/String;)Z

    move-result p1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    .line 161
    :pswitch_4
    invoke-interface {p2, p3}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->stringValue(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->loadPlugin(Ljava/lang/String;)Z

    move-result p1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    .line 159
    :pswitch_5
    invoke-interface {p2, p3}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->stringValue(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p1

    iget-object p1, p1, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    return-object p1

    .line 157
    :pswitch_6
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object p1

    return-object p1

    .line 155
    :pswitch_7
    iget-object p1, p0, Lcom/bykv/vk/openvk/rg/df;->df:Lcom/bykv/vk/openvk/rg/rg;

    invoke-virtual {p1}, Lcom/bykv/vk/openvk/rg/rg;->rg()Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    :cond_2
    :goto_0
    const/4 p1, 0x0

    return-object p1

    :pswitch_data_0
    .packed-switch 0x2
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public call(ILandroid/os/Bundle;)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public callMethod(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)TT;"
        }
    .end annotation

    const-string p1, "com.byted.csj.ext"

    packed-switch p2, :pswitch_data_0

    const/4 p1, 0x0

    return-object p1

    .line 90
    :pswitch_0
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 91
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    const-string p1, "0.0.0.0"

    :cond_0
    return-object p1

    .line 87
    :pswitch_1
    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->isPluginLoaded(Ljava/lang/String;)Z

    move-result p1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    .line 84
    :pswitch_2
    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->isPluginInstalled(Ljava/lang/String;)Z

    move-result p1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    .line 81
    :pswitch_3
    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->loadPlugin(Ljava/lang/String;)Z

    move-result p1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    .line 79
    :pswitch_4
    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p1

    iget-object p1, p1, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    return-object p1

    .line 77
    :pswitch_5
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object p1

    return-object p1

    .line 75
    :pswitch_6
    iget-object p1, p0, Lcom/bykv/vk/openvk/rg/df;->df:Lcom/bykv/vk/openvk/rg/rg;

    invoke-virtual {p1}, Lcom/bykv/vk/openvk/rg/rg;->rg()Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    :pswitch_data_0
    .packed-switch 0x2
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public df()Landroid/app/Application$ActivityLifecycleCallbacks;
    .locals 1

    .line 63
    iget-object v0, p0, Lcom/bykv/vk/openvk/rg/df;->df:Lcom/bykv/vk/openvk/rg/rg;

    return-object v0
.end method

.method public getObj(Ljava/lang/Class;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public getObj(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)TT;"
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public init(Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public removeObj(Ljava/lang/Object;)V
    .locals 0

    return-void
.end method

.method public setObj(Ljava/lang/Object;)V
    .locals 0

    return-void
.end method

.method public subscribe(Lcom/bykv/vk/openvk/TTAdEvent;)V
    .locals 2

    .line 103
    iget-object v0, p0, Lcom/bykv/vk/openvk/rg/df;->df:Lcom/bykv/vk/openvk/rg/rg;

    new-instance v1, Lcom/bykv/vk/openvk/rg/df$1;

    invoke-direct {v1, p0, p1}, Lcom/bykv/vk/openvk/rg/df$1;-><init>(Lcom/bykv/vk/openvk/rg/df;Lcom/bykv/vk/openvk/TTAdEvent;)V

    invoke-virtual {v0, v1}, Lcom/bykv/vk/openvk/rg/rg;->rg(Lcom/bykv/vk/openvk/rg/rg$rg;)V

    return-void
.end method

.method public unsubscribe(Lcom/bykv/vk/openvk/TTAdEvent;)V
    .locals 0

    return-void
.end method

.method public values()Lcom/bykv/vk/openvk/api/proto/ValueSet;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method
