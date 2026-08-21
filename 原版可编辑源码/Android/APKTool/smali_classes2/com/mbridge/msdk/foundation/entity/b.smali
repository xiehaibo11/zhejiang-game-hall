.class public final Lcom/mbridge/msdk/foundation/entity/b;
.super Ljava/lang/Object;
.source "AtfEntity.java"


# instance fields
.field private a:I

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/lang/String;)V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/b;->a:I

    .line 13
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/entity/b;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 17
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/b;->a:I

    return v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/b;->b:Ljava/lang/String;

    return-object v0
.end method
