.class final Lcom/bytedance/pangle/service/PluginIntentService$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/reflect/InvocationHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bytedance/pangle/service/PluginIntentService;->createActivityManagerProxy()Ljava/lang/Object;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bytedance/pangle/service/PluginIntentService;


# direct methods
.method constructor <init>(Lcom/bytedance/pangle/service/PluginIntentService;)V
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/bytedance/pangle/service/PluginIntentService$1;->a:Lcom/bytedance/pangle/service/PluginIntentService;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final invoke(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2

    .line 58
    invoke-virtual {p2}, Ljava/lang/reflect/Method;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result p2

    const p3, 0x25b8196

    const/4 v0, 0x0

    const/4 v1, 0x2

    if-eq p2, p3, :cond_2

    const p3, 0x292f2096

    if-eq p2, p3, :cond_1

    const p3, 0x73145566

    if-eq p2, p3, :cond_0

    goto :goto_0

    :cond_0
    const-string p2, "stopServiceToken"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p1, v0

    goto :goto_1

    :cond_1
    const-string p2, "getForegroundServiceType"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move p1, v1

    goto :goto_1

    :cond_2
    const-string p2, "setServiceForeground"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    const/4 p1, 0x1

    goto :goto_1

    :cond_3
    :goto_0
    const/4 p1, -0x1

    :goto_1
    if-eqz p1, :cond_5

    if-eq p1, v1, :cond_4

    const/4 p1, 0x0

    return-object p1

    .line 69
    :cond_4
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    return-object p1

    .line 63
    :cond_5
    invoke-static {}, Lcom/bytedance/pangle/service/a/a;->b()Lcom/bytedance/pangle/service/a/a;

    move-result-object p1

    new-instance p2, Landroid/content/ComponentName;

    iget-object p3, p0, Lcom/bytedance/pangle/service/PluginIntentService$1;->a:Lcom/bytedance/pangle/service/PluginIntentService;

    invoke-virtual {p3}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p2, p3, v0}, Landroid/content/ComponentName;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Lcom/bytedance/pangle/service/a/a;->a(Landroid/content/ComponentName;)Z

    move-result p1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method
