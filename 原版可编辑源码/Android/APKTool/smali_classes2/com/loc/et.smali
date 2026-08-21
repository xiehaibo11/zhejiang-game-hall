.class public final Lcom/loc/et;
.super Ljava/lang/Object;
.source "DNSIPDelegate.java"


# instance fields
.field private a:[Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Z

.field private e:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/loc/et;->d:Z

    iput-boolean v0, p0, Lcom/loc/et;->e:Z

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/et;->b:Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/loc/et;->d:Z

    return-void
.end method

.method public final a([Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/et;->a:[Ljava/lang/String;

    return-void
.end method

.method public final a()[Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/et;->a:[Ljava/lang/String;

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/et;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/et;->c:Ljava/lang/String;

    return-void
.end method

.method public final b(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/loc/et;->e:Z

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/et;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final d()Z
    .locals 1

    iget-boolean v0, p0, Lcom/loc/et;->d:Z

    return v0
.end method

.method public final e()Z
    .locals 1

    iget-boolean v0, p0, Lcom/loc/et;->e:Z

    return v0
.end method
