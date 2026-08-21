.class public final Lcom/tkay/expressad/exoplayer/d/j$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/d/j$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/d/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# instance fields
.field private final a:[B

.field private final b:Ljava/lang/String;


# direct methods
.method public constructor <init>([BLjava/lang/String;)V
    .locals 0

    .line 161
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 162
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/d/j$a;->a:[B

    .line 163
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/d/j$a;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()[B
    .locals 1

    .line 168
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/j$a;->a:[B

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 173
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/j$a;->b:Ljava/lang/String;

    return-object v0
.end method
