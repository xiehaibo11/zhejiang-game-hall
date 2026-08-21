.class public final Lcom/tkay/core/common/b/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/b/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x11
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/b/c;

.field private final b:Ljava/lang/String;

.field private final c:Z


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/c;Ljava/lang/String;Z)V
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/tkay/core/common/b/c$a;->a:Lcom/tkay/core/common/b/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 34
    iput-object p2, p0, Lcom/tkay/core/common/b/c$a;->b:Ljava/lang/String;

    .line 35
    iput-boolean p3, p0, Lcom/tkay/core/common/b/c$a;->c:Z

    return-void
.end method

.method private b()Z
    .locals 1

    .line 43
    iget-boolean v0, p0, Lcom/tkay/core/common/b/c$a;->c:Z

    return v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/tkay/core/common/b/c$a;->b:Ljava/lang/String;

    return-object v0
.end method
