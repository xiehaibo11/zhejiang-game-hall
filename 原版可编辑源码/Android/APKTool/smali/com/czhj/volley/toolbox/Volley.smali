.class public Lcom/czhj/volley/toolbox/Volley;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String; = "volley"


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/content/Context;Lcom/czhj/volley/Network;)Lcom/czhj/volley/RequestQueue;
    .locals 0

    new-instance p0, Lcom/czhj/volley/RequestQueue;

    invoke-direct {p0, p1}, Lcom/czhj/volley/RequestQueue;-><init>(Lcom/czhj/volley/Network;)V

    invoke-virtual {p0}, Lcom/czhj/volley/RequestQueue;->start()V

    return-object p0
.end method

.method public static newRequestQueue(Landroid/content/Context;)Lcom/czhj/volley/RequestQueue;
    .locals 1

    const/4 v0, 0x0

    check-cast v0, Lcom/czhj/volley/toolbox/BaseHttpStack;

    invoke-static {p0, v0}, Lcom/czhj/volley/toolbox/Volley;->newRequestQueue(Landroid/content/Context;Lcom/czhj/volley/toolbox/BaseHttpStack;)Lcom/czhj/volley/RequestQueue;

    move-result-object p0

    return-object p0
.end method

.method public static newRequestQueue(Landroid/content/Context;Lcom/czhj/volley/toolbox/BaseHttpStack;)Lcom/czhj/volley/RequestQueue;
    .locals 1

    if-nez p1, :cond_0

    new-instance p1, Lcom/czhj/volley/toolbox/BasicNetwork;

    new-instance v0, Lcom/czhj/volley/toolbox/HurlStack;

    invoke-direct {v0}, Lcom/czhj/volley/toolbox/HurlStack;-><init>()V

    invoke-direct {p1, v0}, Lcom/czhj/volley/toolbox/BasicNetwork;-><init>(Lcom/czhj/volley/toolbox/BaseHttpStack;)V

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/czhj/volley/toolbox/BasicNetwork;

    invoke-direct {v0, p1}, Lcom/czhj/volley/toolbox/BasicNetwork;-><init>(Lcom/czhj/volley/toolbox/BaseHttpStack;)V

    move-object p1, v0

    :goto_0
    invoke-static {p0, p1}, Lcom/czhj/volley/toolbox/Volley;->a(Landroid/content/Context;Lcom/czhj/volley/Network;)Lcom/czhj/volley/RequestQueue;

    move-result-object p0

    return-object p0
.end method
