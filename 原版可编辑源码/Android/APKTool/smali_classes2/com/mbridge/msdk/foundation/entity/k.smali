.class public final Lcom/mbridge/msdk/foundation/entity/k;
.super Ljava/lang/Object;
.source "LoopEntity.java"

# interfaces
.implements Ljava/io/Serializable;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:I


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 11
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/k;->b:Ljava/lang/String;

    .line 12
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/entity/k;->a:Ljava/lang/String;

    .line 13
    iput p3, p0, Lcom/mbridge/msdk/foundation/entity/k;->c:I

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 17
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/k;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/k;->b:Ljava/lang/String;

    return-object v0
.end method
