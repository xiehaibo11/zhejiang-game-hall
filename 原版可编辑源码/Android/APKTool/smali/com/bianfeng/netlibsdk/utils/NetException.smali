.class public Lcom/bianfeng/netlibsdk/utils/NetException;
.super Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
.source "NetException.java"


# instance fields
.field public response:Lcom/bianfeng/netlibsdk/NetworkResponse;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/bianfeng/netlibsdk/NetworkResponse;)V
    .locals 0

    .line 19
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/utils/NetException;->response:Lcom/bianfeng/netlibsdk/NetworkResponse;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 10
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 0

    .line 13
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Throwable;)V
    .locals 0

    .line 16
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    return-void
.end method
