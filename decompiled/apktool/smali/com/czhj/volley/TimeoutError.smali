.class public Lcom/czhj/volley/TimeoutError;
.super Lcom/czhj/volley/VolleyError;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/volley/VolleyError;-><init>()V

    return-void
.end method


# virtual methods
.method public getMessage()Ljava/lang/String;
    .locals 1

    const-string v0, "TimeOut Error"

    return-object v0
.end method
