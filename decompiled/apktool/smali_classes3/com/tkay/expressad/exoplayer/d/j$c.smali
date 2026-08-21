.class public final Lcom/tkay/expressad/exoplayer/d/j$c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/d/j$h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/d/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "c"
.end annotation


# instance fields
.field private final a:[B

.field private final b:Ljava/lang/String;


# direct methods
.method public constructor <init>([BLjava/lang/String;)V
    .locals 0

    .line 194
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 195
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/d/j$c;->a:[B

    .line 196
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/d/j$c;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()[B
    .locals 1

    .line 201
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/j$c;->a:[B

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 206
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/j$c;->b:Ljava/lang/String;

    return-object v0
.end method
