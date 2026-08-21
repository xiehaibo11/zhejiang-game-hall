.class Lcom/bianfeng/utilslib/Logger$1;
.super Ljava/util/LinkedList;
.source "Logger.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/utilslib/Logger;->setLogToCache(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
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


# instance fields
.field final synthetic this$0:Lcom/bianfeng/utilslib/Logger;


# direct methods
.method constructor <init>(Lcom/bianfeng/utilslib/Logger;)V
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/bianfeng/utilslib/Logger$1;->this$0:Lcom/bianfeng/utilslib/Logger;

    invoke-direct {p0}, Ljava/util/LinkedList;-><init>()V

    return-void
.end method


# virtual methods
.method public bridge synthetic addLast(Ljava/lang/Object;)V
    .locals 0

    .line 57
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/bianfeng/utilslib/Logger$1;->addLast(Ljava/lang/String;)V

    return-void
.end method

.method public addLast(Ljava/lang/String;)V
    .locals 2

    .line 61
    invoke-virtual {p0}, Lcom/bianfeng/utilslib/Logger$1;->size()I

    move-result v0

    const/16 v1, 0x1388

    if-le v0, v1, :cond_0

    .line 62
    invoke-virtual {p0}, Lcom/bianfeng/utilslib/Logger$1;->removeFirst()Ljava/lang/Object;

    .line 65
    :cond_0
    invoke-super {p0, p1}, Ljava/util/LinkedList;->addLast(Ljava/lang/Object;)V

    return-void
.end method
