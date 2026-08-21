.class public Lcom/sigmob/sdk/archives/tar/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/archives/tar/e;


# instance fields
.field private b:Z


# direct methods
.method public constructor <init>([B)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x1f8

    invoke-static {p1, v0}, Lcom/sigmob/sdk/archives/tar/f;->a([BI)Z

    move-result p1

    iput-boolean p1, p0, Lcom/sigmob/sdk/archives/tar/c;->b:Z

    return-void
.end method


# virtual methods
.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/archives/tar/c;->b:Z

    return v0
.end method
