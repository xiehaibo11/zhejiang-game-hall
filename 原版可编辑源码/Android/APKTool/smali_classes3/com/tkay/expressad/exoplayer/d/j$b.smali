.class public final Lcom/tkay/expressad/exoplayer/d/j$b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/d/j$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/d/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "b"
.end annotation


# instance fields
.field private final a:I

.field private final b:[B


# direct methods
.method constructor <init>(I[B)V
    .locals 0

    .line 128
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 129
    iput p1, p0, Lcom/tkay/expressad/exoplayer/d/j$b;->a:I

    .line 130
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/d/j$b;->b:[B

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 135
    iget v0, p0, Lcom/tkay/expressad/exoplayer/d/j$b;->a:I

    return v0
.end method

.method public final b()[B
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/j$b;->b:[B

    return-object v0
.end method
