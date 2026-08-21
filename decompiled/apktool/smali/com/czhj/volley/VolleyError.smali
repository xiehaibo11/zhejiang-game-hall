.class public Lcom/czhj/volley/VolleyError;
.super Ljava/lang/Exception;


# instance fields
.field private a:J

.field protected errorMsg:Ljava/lang/String;

.field public final networkResponse:Lcom/czhj/volley/NetworkResponse;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Exception;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/volley/VolleyError;->networkResponse:Lcom/czhj/volley/NetworkResponse;

    return-void
.end method

.method public constructor <init>(Lcom/czhj/volley/NetworkResponse;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Exception;-><init>()V

    iput-object p1, p0, Lcom/czhj/volley/VolleyError;->networkResponse:Lcom/czhj/volley/NetworkResponse;

    if-eqz p1, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "http request error status code "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/czhj/volley/NetworkResponse;->statusCode:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/volley/VolleyError;->errorMsg:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/czhj/volley/VolleyError;->networkResponse:Lcom/czhj/volley/NetworkResponse;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/czhj/volley/VolleyError;->networkResponse:Lcom/czhj/volley/NetworkResponse;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Throwable;)V
    .locals 0

    invoke-direct {p0, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/Throwable;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/czhj/volley/VolleyError;->networkResponse:Lcom/czhj/volley/NetworkResponse;

    return-void
.end method


# virtual methods
.method a(J)V
    .locals 0

    iput-wide p1, p0, Lcom/czhj/volley/VolleyError;->a:J

    return-void
.end method

.method public getMessage()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/VolleyError;->errorMsg:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/VolleyError;->errorMsg:Ljava/lang/String;

    return-object v0

    :cond_0
    invoke-super {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkTimeMs()J
    .locals 2

    iget-wide v0, p0, Lcom/czhj/volley/VolleyError;->a:J

    return-wide v0
.end method
