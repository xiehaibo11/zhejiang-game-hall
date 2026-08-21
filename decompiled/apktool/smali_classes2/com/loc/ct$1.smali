.class final Lcom/loc/ct$1;
.super Ljava/lang/Object;
.source "BasePool.java"

# interfaces
.implements Lcom/loc/cs$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/ct;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/ct;


# direct methods
.method constructor <init>(Lcom/loc/ct;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ct$1;->a:Lcom/loc/ct;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/loc/cs;)V
    .locals 1

    iget-object v0, p0, Lcom/loc/ct$1;->a:Lcom/loc/ct;

    invoke-virtual {v0, p1}, Lcom/loc/ct;->a(Lcom/loc/cs;)V

    return-void
.end method
