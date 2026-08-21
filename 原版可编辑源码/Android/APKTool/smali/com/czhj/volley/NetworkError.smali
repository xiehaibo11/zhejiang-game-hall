.class public Lcom/czhj/volley/NetworkError;
.super Lcom/czhj/volley/VolleyError;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/volley/VolleyError;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/czhj/volley/NetworkResponse;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/volley/VolleyError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Throwable;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/volley/VolleyError;-><init>(Ljava/lang/Throwable;)V

    return-void
.end method
