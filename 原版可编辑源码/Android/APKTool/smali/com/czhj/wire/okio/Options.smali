.class public final Lcom/czhj/wire/okio/Options;
.super Ljava/util/AbstractList;

# interfaces
.implements Ljava/util/RandomAccess;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/AbstractList<",
        "Lcom/czhj/wire/okio/ByteString;",
        ">;",
        "Ljava/util/RandomAccess;"
    }
.end annotation


# instance fields
.field final a:[Lcom/czhj/wire/okio/ByteString;


# direct methods
.method private constructor <init>([Lcom/czhj/wire/okio/ByteString;)V
    .locals 0

    invoke-direct {p0}, Ljava/util/AbstractList;-><init>()V

    iput-object p1, p0, Lcom/czhj/wire/okio/Options;->a:[Lcom/czhj/wire/okio/ByteString;

    return-void
.end method

.method public static varargs of([Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/okio/Options;
    .locals 1

    new-instance v0, Lcom/czhj/wire/okio/Options;

    invoke-virtual {p0}, [Lcom/czhj/wire/okio/ByteString;->clone()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [Lcom/czhj/wire/okio/ByteString;

    invoke-direct {v0, p0}, Lcom/czhj/wire/okio/Options;-><init>([Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method


# virtual methods
.method public get(I)Lcom/czhj/wire/okio/ByteString;
    .locals 1

    iget-object v0, p0, Lcom/czhj/wire/okio/Options;->a:[Lcom/czhj/wire/okio/ByteString;

    aget-object p1, v0, p1

    return-object p1
.end method

.method public bridge synthetic get(I)Ljava/lang/Object;
    .locals 0

    invoke-virtual {p0, p1}, Lcom/czhj/wire/okio/Options;->get(I)Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    return-object p1
.end method

.method public size()I
    .locals 1

    iget-object v0, p0, Lcom/czhj/wire/okio/Options;->a:[Lcom/czhj/wire/okio/ByteString;

    array-length v0, v0

    return v0
.end method
