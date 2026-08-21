.class public Lcom/czhj/volley/ClientError;
.super Lcom/czhj/volley/ServerError;


# instance fields
.field private a:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/volley/ServerError;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/czhj/volley/NetworkResponse;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/volley/ServerError;-><init>(Lcom/czhj/volley/NetworkResponse;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/volley/ServerError;-><init>(Ljava/lang/String;)V

    iput-object p2, p0, Lcom/czhj/volley/ClientError;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getRequest_id()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/ClientError;->a:Ljava/lang/String;

    return-object v0
.end method
