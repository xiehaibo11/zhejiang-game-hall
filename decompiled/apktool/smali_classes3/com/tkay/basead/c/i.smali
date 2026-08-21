.class public final Lcom/tkay/basead/c/i;
.super Ljava/lang/Object;


# instance fields
.field public a:Ljava/lang/String;

.field public b:Ljava/lang/String;

.field public c:I

.field public d:I

.field public e:I

.field public f:I

.field public g:Lcom/tkay/basead/c/a;

.field public h:Lcom/tkay/basead/c/j;

.field public i:Lcom/tkay/basead/c/b;

.field public j:Z


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 27
    iput-boolean v0, p0, Lcom/tkay/basead/c/i;->j:Z

    .line 30
    iput-object p1, p0, Lcom/tkay/basead/c/i;->a:Ljava/lang/String;

    .line 31
    iput-object p2, p0, Lcom/tkay/basead/c/i;->b:Ljava/lang/String;

    return-void
.end method
