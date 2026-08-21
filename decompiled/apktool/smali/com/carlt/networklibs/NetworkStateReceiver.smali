.class public Lcom/carlt/networklibs/NetworkStateReceiver;
.super Landroid/content/BroadcastReceiver;
.source "NetworkStateReceiver.java"


# instance fields
.field private netType:Lcom/carlt/networklibs/NetType;

.field private networkList:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Object;",
            "Ljava/util/List<",
            "Lcom/carlt/networklibs/MethodManager;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 31
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    .line 32
    sget-object v0, Lcom/carlt/networklibs/NetType;->NONE:Lcom/carlt/networklibs/NetType;

    iput-object v0, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->netType:Lcom/carlt/networklibs/NetType;

    .line 33
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->networkList:Ljava/util/Map;

    return-void
.end method

.method private findAnnotation(Ljava/lang/Object;)Ljava/util/List;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/List<",
            "Lcom/carlt/networklibs/MethodManager;",
            ">;"
        }
    .end annotation

    .line 115
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 116
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    .line 117
    invoke-virtual {p1}, Ljava/lang/Class;->getMethods()[Ljava/lang/reflect/Method;

    move-result-object p1

    .line 118
    array-length v1, p1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_3

    aget-object v4, p1, v3

    .line 119
    const-class v5, Lcom/carlt/networklibs/annotation/NetWork;

    invoke-virtual {v4, v5}, Ljava/lang/reflect/Method;->getAnnotation(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;

    move-result-object v5

    check-cast v5, Lcom/carlt/networklibs/annotation/NetWork;

    if-nez v5, :cond_0

    goto :goto_1

    .line 123
    :cond_0
    invoke-virtual {v4}, Ljava/lang/reflect/Method;->getGenericReturnType()Ljava/lang/reflect/Type;

    move-result-object v6

    .line 124
    invoke-virtual {v6}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v7, "void"

    invoke-virtual {v6, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_2

    .line 127
    invoke-virtual {v4}, Ljava/lang/reflect/Method;->getParameterTypes()[Ljava/lang/Class;

    move-result-object v6

    .line 128
    array-length v7, v6

    const/4 v8, 0x1

    if-ne v7, v8, :cond_1

    .line 132
    new-instance v7, Lcom/carlt/networklibs/MethodManager;

    aget-object v6, v6, v2

    invoke-interface {v5}, Lcom/carlt/networklibs/annotation/NetWork;->netType()Lcom/carlt/networklibs/NetType;

    move-result-object v5

    invoke-direct {v7, v6, v5, v4}, Lcom/carlt/networklibs/MethodManager;-><init>(Ljava/lang/Class;Lcom/carlt/networklibs/NetType;Ljava/lang/reflect/Method;)V

    .line 133
    invoke-interface {v0, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 129
    :cond_1
    new-instance p1, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4}, Ljava/lang/reflect/Method;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "Method can only have one parameter"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 125
    :cond_2
    new-instance p1, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4}, Ljava/lang/reflect/Method;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "Method return must be void"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_3
    return-object v0
.end method

.method private invoke(Lcom/carlt/networklibs/MethodManager;Ljava/lang/Object;Lcom/carlt/networklibs/NetType;)V
    .locals 2

    .line 95
    invoke-virtual {p1}, Lcom/carlt/networklibs/MethodManager;->getMethod()Ljava/lang/reflect/Method;

    move-result-object p1

    const/4 v0, 0x1

    :try_start_0
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p3, v0, v1

    .line 97
    invoke-virtual {p1, p2, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 101
    invoke-virtual {p1}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception p1

    .line 99
    invoke-virtual {p1}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private post(Lcom/carlt/networklibs/NetType;)V
    .locals 6

    .line 57
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->networkList:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    .line 58
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_9

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    .line 59
    iget-object v2, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->networkList:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/List;

    if-eqz v2, :cond_0

    .line 61
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/carlt/networklibs/MethodManager;

    .line 62
    invoke-virtual {v3}, Lcom/carlt/networklibs/MethodManager;->getType()Ljava/lang/Class;

    move-result-object v4

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/Class;->isAssignableFrom(Ljava/lang/Class;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 63
    sget-object v4, Lcom/carlt/networklibs/NetworkStateReceiver$1;->$SwitchMap$com$carlt$networklibs$NetType:[I

    invoke-virtual {v3}, Lcom/carlt/networklibs/MethodManager;->getNetType()Lcom/carlt/networklibs/NetType;

    move-result-object v5

    invoke-virtual {v5}, Lcom/carlt/networklibs/NetType;->ordinal()I

    move-result v5

    aget v4, v4, v5

    const/4 v5, 0x1

    if-eq v4, v5, :cond_8

    const/4 v5, 0x2

    if-eq v4, v5, :cond_6

    const/4 v5, 0x3

    if-eq v4, v5, :cond_4

    const/4 v5, 0x4

    if-eq v4, v5, :cond_2

    goto :goto_0

    .line 78
    :cond_2
    sget-object v4, Lcom/carlt/networklibs/NetType;->CMNET:Lcom/carlt/networklibs/NetType;

    if-eq p1, v4, :cond_3

    sget-object v4, Lcom/carlt/networklibs/NetType;->NONE:Lcom/carlt/networklibs/NetType;

    if-ne p1, v4, :cond_1

    .line 79
    :cond_3
    invoke-direct {p0, v3, v1, p1}, Lcom/carlt/networklibs/NetworkStateReceiver;->invoke(Lcom/carlt/networklibs/MethodManager;Ljava/lang/Object;Lcom/carlt/networklibs/NetType;)V

    goto :goto_0

    .line 73
    :cond_4
    sget-object v4, Lcom/carlt/networklibs/NetType;->CMWAP:Lcom/carlt/networklibs/NetType;

    if-eq p1, v4, :cond_5

    sget-object v4, Lcom/carlt/networklibs/NetType;->NONE:Lcom/carlt/networklibs/NetType;

    if-ne p1, v4, :cond_1

    .line 74
    :cond_5
    invoke-direct {p0, v3, v1, p1}, Lcom/carlt/networklibs/NetworkStateReceiver;->invoke(Lcom/carlt/networklibs/MethodManager;Ljava/lang/Object;Lcom/carlt/networklibs/NetType;)V

    goto :goto_0

    .line 68
    :cond_6
    sget-object v4, Lcom/carlt/networklibs/NetType;->WIFI:Lcom/carlt/networklibs/NetType;

    if-eq p1, v4, :cond_7

    sget-object v4, Lcom/carlt/networklibs/NetType;->NONE:Lcom/carlt/networklibs/NetType;

    if-ne p1, v4, :cond_1

    .line 69
    :cond_7
    invoke-direct {p0, v3, v1, p1}, Lcom/carlt/networklibs/NetworkStateReceiver;->invoke(Lcom/carlt/networklibs/MethodManager;Ljava/lang/Object;Lcom/carlt/networklibs/NetType;)V

    goto :goto_0

    .line 65
    :cond_8
    invoke-direct {p0, v3, v1, p1}, Lcom/carlt/networklibs/NetworkStateReceiver;->invoke(Lcom/carlt/networklibs/MethodManager;Ljava/lang/Object;Lcom/carlt/networklibs/NetType;)V

    goto :goto_0

    :cond_9
    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    if-eqz p2, :cond_2

    .line 38
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_0

    goto :goto_0

    .line 44
    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string p2, "android.net.conn.CONNECTIVITY_CHANGE"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 46
    invoke-static {}, Lcom/carlt/networklibs/utils/NetworkUtils;->getNetType()Lcom/carlt/networklibs/NetType;

    move-result-object p1

    iput-object p1, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->netType:Lcom/carlt/networklibs/NetType;

    .line 52
    invoke-direct {p0, p1}, Lcom/carlt/networklibs/NetworkStateReceiver;->post(Lcom/carlt/networklibs/NetType;)V

    :cond_1
    return-void

    :cond_2
    :goto_0
    const-string p1, "network>>>"

    const-string p2, "intent or intent.getAction() is null"

    .line 40
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public registerObserver(Ljava/lang/Object;)V
    .locals 2

    .line 107
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->networkList:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    if-nez v0, :cond_0

    .line 109
    invoke-direct {p0, p1}, Lcom/carlt/networklibs/NetworkStateReceiver;->findAnnotation(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    .line 110
    iget-object v1, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->networkList:Ljava/util/Map;

    invoke-interface {v1, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public unRegisterAllObserver()V
    .locals 1

    .line 145
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->networkList:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 146
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->networkList:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 148
    :cond_0
    invoke-static {}, Lcom/carlt/networklibs/NetworkManager;->getInstance()Lcom/carlt/networklibs/NetworkManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/carlt/networklibs/NetworkManager;->getApplication()Landroid/app/Application;

    move-result-object v0

    invoke-virtual {v0, p0}, Landroid/app/Application;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 v0, 0x0

    .line 149
    iput-object v0, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->networkList:Ljava/util/Map;

    return-void
.end method

.method public unRegisterObserver(Ljava/lang/Object;)V
    .locals 1

    .line 139
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->networkList:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 140
    iget-object v0, p0, Lcom/carlt/networklibs/NetworkStateReceiver;->networkList:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method
