.class public final Lcom/mbridge/msdk/mbjscommon/b/a$c;
.super Ljava/lang/Object;
.source "Hack.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbjscommon/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "c"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<C:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field protected a:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "TC;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/lang/Class;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "TC;>;)V"
        }
    .end annotation

    .line 278
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/b/a$c;->a:Ljava/lang/Class;

    return-void
.end method


# virtual methods
.method public final varargs a(Ljava/lang/String;[Ljava/lang/Class;)Lcom/mbridge/msdk/mbjscommon/b/a$d;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/Class<",
            "*>;)",
            "Lcom/mbridge/msdk/mbjscommon/b/a$d;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/mbjscommon/b/a$b$a;
        }
    .end annotation

    .line 271
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/b/a$d;

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/b/a$c;->a:Ljava/lang/Class;

    const/4 v2, 0x0

    invoke-direct {v0, v1, p1, p2, v2}, Lcom/mbridge/msdk/mbjscommon/b/a$d;-><init>(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;I)V

    return-object v0
.end method
