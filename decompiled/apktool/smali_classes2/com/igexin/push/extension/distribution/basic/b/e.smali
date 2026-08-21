.class public Lcom/igexin/push/extension/distribution/basic/b/e;
.super Lcom/igexin/push/core/bean/BaseAction;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/bean/BaseAction;-><init>()V

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/b/e;->a:Ljava/lang/String;

    return-object v0
.end method

.method public a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/b/e;->a:Ljava/lang/String;

    return-void
.end method

.method public a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/b/e;->b:Z

    return-void
.end method

.method public b()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/b/e;->b:Z

    return v0
.end method
