mysql> create trigger t_update
before update on library
for each row begin
insert into library_audit values(
old.book_id,
old.book_name,
old.book_author,
old.book_copies); 
END;
