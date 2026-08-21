.class public abstract Lcom/tramini/plugin/a/g/b/b;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field private a:I

.field protected d:Lcom/tramini/plugin/a/g/b/c;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 13
    iput v0, p0, Lcom/tramini/plugin/a/g/b/b;->a:I

    return-void
.end method

.method private b()I
    .locals 1

    .line 20
    iget v0, p0, Lcom/tramini/plugin/a/g/b/b;->a:I

    return v0
.end method


# virtual methods
.method public abstract a()V
.end method

.method final a(I)V
    .locals 0

    .line 16
    iput p1, p0, Lcom/tramini/plugin/a/g/b/b;->a:I

    return-void
.end method

.method public run()V
    .locals 0

    .line 32
    invoke-virtual {p0}, Lcom/tramini/plugin/a/g/b/b;->a()V

    return-void
.end method
