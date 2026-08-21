.class final Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger$1;
.super Ljava/util/LinkedList;
.source "UtilsLogger.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->setLogToCache(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/LinkedList<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# static fields
.field private static final serialVersionUID:J = 0x1L


# direct methods
.method constructor <init>()V
    .locals 0

    .line 82
    invoke-direct {p0}, Ljava/util/LinkedList;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic addLast(Ljava/lang/Object;)V
    .locals 0

    .line 82
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger$1;->addLast(Ljava/lang/String;)V

    return-void
.end method

.method public addLast(Ljava/lang/String;)V
    .locals 2

    .line 87
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger$1;->size()I

    move-result v0

    const/16 v1, 0x1388

    if-le v0, v1, :cond_0

    .line 88
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger$1;->removeFirst()Ljava/lang/Object;

    .line 90
    :cond_0
    invoke-super {p0, p1}, Ljava/util/LinkedList;->addLast(Ljava/lang/Object;)V

    return-void
.end method
