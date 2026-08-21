.class final Lcom/tkay/basead/f/a/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/Comparator;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/f/a/a;->b(Ljava/lang/String;)Ljava/lang/String;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/Comparator<",
        "Lcom/tkay/basead/c/c;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/f/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/basead/f/a/a;)V
    .locals 0

    .line 120
    iput-object p1, p0, Lcom/tkay/basead/f/a/a$1;->a:Lcom/tkay/basead/f/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/tkay/basead/c/c;Lcom/tkay/basead/c/c;)I
    .locals 0

    .line 123
    iget p0, p0, Lcom/tkay/basead/c/c;->d:I

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    iget p1, p1, Lcom/tkay/basead/c/c;->d:I

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/Integer;->compareTo(Ljava/lang/Integer;)I

    move-result p0

    return p0
.end method


# virtual methods
.method public final synthetic compare(Ljava/lang/Object;Ljava/lang/Object;)I
    .locals 0

    .line 120
    check-cast p1, Lcom/tkay/basead/c/c;

    check-cast p2, Lcom/tkay/basead/c/c;

    .line 1123
    iget p1, p1, Lcom/tkay/basead/c/c;->d:I

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iget p2, p2, Lcom/tkay/basead/c/c;->d:I

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/Integer;->compareTo(Ljava/lang/Integer;)I

    move-result p1

    return p1
.end method
